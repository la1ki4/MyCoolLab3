#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
#include <string>

/*!
@brief A class that stores data about birth year of participant
@param unsigned short day - The day on which the participant was born
@param unsigned short month - The month on which the participant was born
@param unsigned short year - The year on which the participant was born
*/
class Date
{
private:
	unsigned short day;
	unsigned short month;
	unsigned short year;

public:
	///Class default constructor
	Date() = default;

	/// <summary>
	/// Class constructor with parameters
	/// </summary>
	/// <param name="unsigned short">day</param>
	/// <param name="unsigned short">month</param>
	/// <param name="unsigned short">year</param>
	Date(const unsigned short&, const unsigned short&, const unsigned short&);

	/// <summary>
	/// Copy constructor
	/// </summary>
	/// <param name="Date"></param>
	Date(const Date&);

	/**
	@brief Overloaded assignment operator.
	@brief Allows you to assign the value of each field to another object of the Date class.
	*/
	const Date& operator=(const Date&);

	/**
	@brief Overloading the comparison operator
	@brief Allows you to compare objects of the Date class
	*/
	bool operator==(const Date&) const;
	
	/// <summary>
	/// Day method
	/// </summary>
	/// <returns>unsigned short day</returns>
	unsigned short Day() const;

	/// <summary>
	/// Month method
	/// </summary>
	/// <returns>unsigned short month</returns>
	unsigned short Month() const;

	/// <summary>
	/// Year method
	/// </summary>
	/// <returns>unsigned short year</returns>
	unsigned short Year() const;
};

/// <summary>
/// Overloading the input stream operator. 
/// Reads the values of the participant 's year of birth from the list and writes the values to the class object . The separator can be any character.
/// </summary>
/// <param name="std::istream">in</param>
/// <param name="Date">birthYear</param>
/// <returns>std::istream in</returns>
std::istream& operator>>(std::istream&, Date&);

/// <summary>
/// Overloading the output stream operator. 
/// Outputs the values of the class fields in the console
/// </summary>
/// <param name="std::ostream">out</param>
/// <param name="Date">birthYear</param>
/// <returns>std::ostream out</returns>
std::ostream& operator<<(std::ostream&, Date&);


#endif