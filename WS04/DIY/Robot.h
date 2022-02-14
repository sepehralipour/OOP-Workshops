
/* ------------------------------------------------------
Workshop 4 part 2
Module: N/A
Filename: Robot.h
Version 1
Author	Sepehr Alipour
Email   salipour2@myseneca.ca
StudentID 107296212
Revision History
-----------------------------------------------------------
Date       02/13/2022
-----------------------------------------------------------*/


#ifndef _ROBOTS_
#define _ROBOTS_


namespace sdds {

	class Robot
	{
		char* name;
		char* location;
		double weight;
		double width;
		double height;
		double speed;
		bool deployed;

	

	public:

		Robot();
		~Robot();
		Robot(const char* name, const char* location, const double weight, const double width, const double height, const double speed, const bool deployed);
		Robot& set(const char* name, const char* location, const double weight, const double width, const double height, const double speed, const bool deployed);
		Robot& setLocation(const char* location);
		Robot& setDeployed(bool deployed);
		char* getName() const;
		char* getLocation() const;
		bool isDeployed() const;
		bool isValid() const;
		double getSpeed() const;
		void display() const;
		void resetInfo();
	};

	int conrtolRooomReport(const Robot robot[], int size);

}
#endif