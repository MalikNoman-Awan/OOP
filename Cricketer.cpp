/*			M. NAUMAN
			SAP # 42899
			ASSIGNMENT # 2
			OBJECT ORIENTED PROGRAMMING
			BSCS-2
			RSCI			*/

#include<iostream>
using namespace std;

class Cricketer
{
	protected:
		string name, DOB;
		int shirt_no, T20_ranking, ODI_ranking, Test_ranking, start_year;
		
	public:
		Cricketer()
		{
			name = " ";
			DOB = " ";
			shirt_no = 0;
			T20_ranking = 0;
			ODI_ranking = 0;
			Test_ranking = 0;
			start_year = 0;
			cout << "Default Constructor of Cricketer" << endl << endl;
		}
		
		Cricketer(string name, string DOB, int shirt_no, int T20_ranking, int ODI_ranking, int Test_ranking, int start_year)
		{	
			this->name = name;
			this->DOB = DOB;
			this->shirt_no = shirt_no;
			this->T20_ranking = T20_ranking;
			this->ODI_ranking = ODI_ranking;
			this->Test_ranking = Test_ranking;
			this->start_year = start_year;
			cout << "Parameterized Constructor of Cricketer" << endl << endl;
		}
		
		int calculateAge()
		{
			int calc;
			string check;
			check = DOB.substr(6);
			calc = 2022-stoi(check);
			return calc;	
		}
		
		int calculateExperience()
		{
			int xp;
			xp = 2022-start_year;
			return xp;
		}
		
		void changeODIrating(int change_ODI_ranking)
		{
			ODI_ranking = change_ODI_ranking;
		}
		
		void changeT20rating(int change_T20_ranking)
		{
			T20_ranking = change_T20_ranking;
		}
		
		void changeTestRating(int change_Test_ranking)
		{
			Test_ranking = change_Test_ranking;
		}
		
		~Cricketer()
		{
			cout << "Destructor of Cricketer" << endl << endl;
		}
};

class Batsman:public Cricketer
{
	private:
		string batsman_type;
		int matches_played, total_runs, best_score;
		
	public:
		Batsman()
		{
			batsman_type = " ";
			matches_played = 0;
			total_runs = 0;
			best_score = 0;
			cout << "Default Constructor of Batsman" << endl << endl;
		}
		
		Batsman(string batsman_type, int matches_played, int total_runs, int best_score, string name, string DOB, int shirt_no, int T20_ranking, int ODI_ranking, int Test_ranking, int start_year)
			: Cricketer(name, DOB, shirt_no, T20_ranking, ODI_ranking, Test_ranking, start_year)	
		{
			this->batsman_type = batsman_type;
			this->matches_played = matches_played;
			this->total_runs = total_runs;
			this->best_score = best_score;
			cout << "Parametrized Constructor of Batsman" << endl << endl;
		}
		
		int calcBatAvg()
		{
			int avg;
			avg = total_runs / matches_played;
			return avg;
		}
		
		void updateMatches(int update_match)
		{
			if(update_match>0)
			{
				matches_played = matches_played + update_match;
			}
			else
			{
				cout << "Invalid Operation" << endl;
			}
		}
		
		void updateRuns(int update_runs)
		{
			if(update_runs>0)
			{
				total_runs = total_runs + update_runs;
			}
			else
			{
				cout << "Invalid Operation" << endl << endl;
			}
		}
		
		~Batsman()
		{
			cout << "Destructor of Batsman" << endl << endl;
		}
};

class Bowler:public Cricketer
{
	private:
		string bowler_type;
		int total_wickets, matches_played;
		
	public:
		Bowler()
		{
			bowler_type = " ";
			total_wickets = 0;
			matches_played = 0;
			cout << "Default Constructor of Bowler" << endl << endl;
		}
		
		Bowler(string bowler_type, int total_wickets, int matches_played, string name, string DOB, int shirt_no, int T20_ranking, int ODI_ranking, int Test_ranking, int start_year)
			: Cricketer(name, DOB, shirt_no, T20_ranking, ODI_ranking, Test_ranking, start_year)
		{
			this->bowler_type = bowler_type;
			this->total_wickets = total_wickets;
			this->matches_played = matches_played;
			cout << "Paremetrized Constructor of Bowler" << endl << endl;
		}
		
		int calcBowlAvg()
		{
			int avg;
			avg = total_wickets / matches_played;
			return avg;
		}
		
		void updateMatches(int update_match)
		{
			if(update_match>0)
			{
				matches_played = matches_played + update_match;
			}
			else
			{
				cout << "Invalid Operation" << endl;
			}
		}
		
		void updateWickets(int update_wickets)
		{
			if(update_wickets>0)
			{
				total_wickets = total_wickets + update_wickets;
			}
			else
			{
				cout << "Invalid Operation" << endl << endl;
			}
		}
		
		~Bowler()
		{
			cout << "Destructor of Bowler" << endl << endl;
		}
};

class AllRounder:public Batsman, Bowler
{
	public:
		AllRounder()
		{
			cout << "Default Constructor of All Rounder" << endl << endl;
		}
		
		~AllRounder()
		{
			cout << "Destructor of All Rounder" << endl << endl;
		}
};


int main()
{
	Cricketer a; 	// created object for Default Constructor
	Cricketer c1("Babar Azam", "25/06/1998", 56, 4, 1, 5, 2015);
	cout << "Age is = " << c1.calculateAge() << " Years" << endl;
	cout << "Experience is = " << c1.calculateExperience() << " Years" << endl << endl;
	c1.changeODIrating(2);
	c1.changeT20rating(1);
	c1.changeTestRating(3);
	
	Batsman b;		// created object for Default Constructor
	Batsman b1("Right Hander", 70, 3500, 122, "Babar Azam", "25/06/1998", 56, 4, 1, 5, 2015);
	cout << "Batting Average = " << b1.calcBatAvg() << endl << endl;
	b1.updateMatches(1);
	b1.updateRuns(63);
	
	Bowler c;		// created object for Default Constructor
	Bowler bw1("Left Hander Fast", 45, 30, "Shaheen Afridi", "18/09/2000", 24, 8, 13, 5, 2020);
	cout << "Bowling Average = " << bw1.calcBowlAvg() << endl << endl;
	bw1.updateMatches(2);
	bw1.updateWickets(5);
	
	return 0;
}