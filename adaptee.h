#pragma once
#include <map>
#include <set>
#include <vector>

class adaptee
{
private:
	map<string, book> mapbook;

	//TODO
public:
	void add(const book value, int& result)
	{
		auto f = mapbook.find(*(value.bookName));
		if (f == mapbook.end())
		{
			result = 1;
			mapbook.insert(pair<string, book>(*(value.bookName), value));
		}
		else
		{
			result = 0;
		}
	}

	//�[�J�@�ӭ� ���\result�]��1  ����result�]��0
	void remove(const book value, int& result)
	{
		auto f = mapbook.find(*(value.bookName));
		if (f == mapbook.end())
		{
			//cout << "�S��� " << *(value.bookName) << endl;
			result = 0;
		}
		else
		{
			//cout << "�R�� " << *(value.bookName) << endl;
			mapbook.erase(f);
			result = 1;
		}
	}

	//�R���@�ӭ� ���\result�]��1  ����result�]��0
	void find(const char* bookName, book*& ptr)
	{
		auto f = mapbook.find(bookName);
		if (f == mapbook.end())
		{
			ptr = nullptr;
		}
		else
		{
			ptr = &(f->second);
		}
	}

	void find(const char* bookName, const char* authors, book*& ptr)
	{
		auto f = mapbook.find(bookName);
		if (f == mapbook.end())
		{
			ptr = nullptr;
		}
		else
		{
			if (strcmp((f->second.authors)->c_str(), authors) == 0)
			{
				ptr = &(f->second);
			}
			else
			{
				ptr = nullptr;
			}
		}
	}

	void mostExpensive(book*& ptr)
	{
		auto it = mapbook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != mapbook.end())
		{
			if (it->second.price > mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	void cheapest(book*& ptr)
	{
		auto it = mapbook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != mapbook.end())
		{
			if (it->second.price < mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	float average()
	{
		float sum = 0.0f;
		int count = 0;
		auto it = mapbook.begin();


		while (it != mapbook.end())
		{
			sum += it->second.price;
			count++;
			++it;
		}
		return sum / count;
	}

	void clean()
	{
		mapbook.clear();
	}

	//�d�ߤ@�ӭ�   ���\ ����ptr����table����
	//���� ����ptr�]��0
};





class adaptee3
{
private:
	std::multimap<string, book> multiMapBook;

	//TODO
public:
	void add(const book value, int& result)
	{
		auto f = multiMapBook.find(*(value.bookName));
		if (f == multiMapBook.end())
		{
			result = 1;
			multiMapBook.insert(pair<string, book>(*(value.bookName), value));
		}
		else
		{
			result = 0;
		}
	}

	//�[�J�@�ӭ� ���\result�]��1  ����result�]��0
	void remove(const book value, int& result)
	{
		auto f = multiMapBook.find(*(value.bookName));
		if (f == multiMapBook.end())
		{
			//cout << "�S��� " << *(value.bookName) << endl;
			result = 0;
		}
		else
		{
			//cout << "�R�� " << *(value.bookName) << endl;
			multiMapBook.erase(f);
			result = 1;
		}
	}

	//�R���@�ӭ� ���\result�]��1  ����result�]��0
	void find(const char* bookName, book*& ptr)
	{
		auto f = multiMapBook.find(bookName);
		if (f == multiMapBook.end())
		{
			ptr = nullptr;
		}
		else
		{
			ptr = &(f->second);
		}
	}

	void find(const char* bookName, const char* authors, book*& ptr)
	{
		auto f = multiMapBook.find(bookName);
		if (f == multiMapBook.end())
		{
			ptr = nullptr;
		}
		else
		{
			if (strcmp((f->second.authors)->c_str(), authors) == 0)
			{
				ptr = &(f->second);
			}
			else
			{
				ptr = nullptr;
			}
		}
	}

	void mostExpensive(book*& ptr)
	{
		auto it = multiMapBook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != multiMapBook.end())
		{
			if (it->second.price > mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	void cheapest(book*& ptr)
	{
		auto it = multiMapBook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != multiMapBook.end())
		{
			if (it->second.price < mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	float average()
	{
		float sum = 0.0f;
		int count = 0;
		auto it = multiMapBook.begin();


		while (it != multiMapBook.end())
		{
			sum += it->second.price;
			count++;
			++it;
		}
		return sum / count;
	}

	void clean()
	{
		multiMapBook.clear();
	}

};



class adaptee4
{
private:
	vector<pair<string, book>> vectorBook;

	//TODO
public:
	void add(const book value, int& result)
	{
		auto it = std::find_if(vectorBook.begin(), vectorBook.end(),
			[&value](const std::pair<std::string, book>& element) { return element.first == *value.bookName; });
		if (it == vectorBook.end())
		{
			result = 1;
			vectorBook.push_back(make_pair(*value.bookName,value));
		}
		else
		{
			result = 0;
		}
	}

	//�[�J�@�ӭ� ���\result�]��1  ����result�]��0
	void remove(const book value, int& result)
	{
		auto f = std::find_if(vectorBook.begin(), vectorBook.end(),
			[&value](const std::pair<std::string, book>& element) { return element.first == *value.bookName; });
		if (f == vectorBook.end())
		{
			//cout << "�S��� " << *(value.bookName) << endl;
			result = 0;
		}
		else
		{
			//cout << "�R�� " << *(value.bookName) << endl;
			vectorBook.erase(f);
			result = 1;
		}
	}

	//�R���@�ӭ� ���\result�]��1  ����result�]��0
	void find(const char* bookName, book*& ptr)
	{
		auto it = std::find_if(vectorBook.begin(), vectorBook.end(),
			[&](const std::pair<std::string, book>& element) { return element.first == bookName; });
		if (it == vectorBook.end())
		{
			ptr = nullptr;
		}
		else
		{
			ptr = &(it->second);
		}
	}

	void find(const char* bookName, const char* authors, book*& ptr)
	{
		auto f = std::find_if(vectorBook.begin(), vectorBook.end(),
			[&](const std::pair<std::string, book>& element) { return element.first == bookName; });
		if (f == vectorBook.end())
		{
			ptr = nullptr;
		}
		else
		{
			if (strcmp((f->second.authors)->c_str(), authors) == 0)
			{
				ptr = &(f->second);
			}
			else
			{
				ptr = nullptr;
			}
		}
	}

	void mostExpensive(book*& ptr)
	{
		auto it = vectorBook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != vectorBook.end())
		{
			if (it->second.price > mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	void cheapest(book*& ptr)
	{
		auto it = vectorBook.begin();
		int mostCost = it->second.price;
		ptr = &(it->second);
		while (it != vectorBook.end())
		{
			if (it->second.price < mostCost)
			{
				mostCost = it->second.price;
				ptr = &(it->second);
			}
			++it;
		}
	}

	float average()
	{
		float sum = 0.0f;
		int count = 0;
		auto it = vectorBook.begin();


		while (it != vectorBook.end())
		{
			sum += it->second.price;
			count++;
			++it;
		}
		return sum / count;
	}

	void clean()
	{
		vectorBook.clear();
	}
	
};
