#include <iostream>
#include <string>
#include <vector>
#include "user.h"

#ifndef USER_H
#define USER_H


	int User::get_user_count()
	{
		return user_count;
	}
	std::string first_name;
	std::string last_name;
	////////////////////////
	std::string User::get_status()
	{
		return User::status;
	}
	///////////////////////////////////////////////////////////////////////
	User::User()
	{
		std::cout<<"User created.\n";
		user_count++;
	}
	User::User(std::string first_name, std::string last_name, std::string sttus)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->status = sttus;
		user_count++;
	}
	User::~User()
	{
		std::cout<<"Destructor\n";
		user_count--;
	}
	
	void User::output()
	{
		std::cout << "I am a user\n";
	}


void output_status(User user)
{
	std::cout << user.status;
}

int User::user_count = 0;


int add_user(std::vector<User> &users, User user)
{
	for(int i =0; i < users.size(); i++)
	{
		if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
		{
			std::cout << "User already exists"<< std::endl; 
			return i;
		}
	}
	users.push_back(user);
	return users.size();
}

std::ostream& operator << (std::ostream& output, const User user)
{
	output << user.first_name << "\t" << user.last_name << "\t" << user.status << "\n";
	return output;
}

std::istream& operator >>(std::istream& input, User &user)
{
	input >> user.first_name>>user.last_name>>user.status;
	return input;
	
}

#endif
