class User
{
	
	static int user_count;
public:
	static int get_user_count();
	std::string status = "Gold";
	std::string first_name;
	std::string last_name;
	////////////////////////
	std::string get_status();
	///////////////////////////////////////////////////////////////////////
	User();
	User(std::string first_name, std::string last_name, std::string sttus);
	~User();
	virtual void output();
	friend void output_status(User user);
	friend std::ostream& operator << (std::ostream& output, const User user);
	friend std::istream& operator >>(std::istream& input, User &user);
	
};

