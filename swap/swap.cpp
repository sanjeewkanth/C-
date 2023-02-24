#include <iostream>
#include <string>
const int SIZE = 7;
namespace ultra
{
	template <typename T>
	inline void swap(T &a, T &b)
	{
		T temp = a;
		a = b;
		b = temp;
	}

	template<typename T>
	inline void swap(T a[], T b[], int size)
	{
		for(int i = 0; i < size; i++)
		{
			T temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
	}

}

int main()
{
	int a = 10;
	int b = 20;
	ultra::swap(a,b);
	std::cout<<"a: "<<a<<"\t"<<"b: "<<b<<"\n";


	std::string first_name = "abc";
	std::string last_name = "#1";
	ultra::swap(first_name, last_name);
	std::cout<<"first name: "<<first_name<<"\tLast name: "<<last_name<<std::endl;

	int nines[] = {9,9,9,9,9,9,9};
	int ones[] = {1,1,1,1,1,1,1};

	for (int i = 0;i<SIZE;i++)
	{
		std::cout<<nines[i]<<"\t"<<ones[i]<<std::endl;
	}
	std::cout<<std::endl;
	ultra::swap(nines,ones,SIZE);
        for (int i = 0;i<SIZE;i++)
        {
                std::cout<<nines[i]<<"\t"<<ones[i]<<std::endl;
        }

}
