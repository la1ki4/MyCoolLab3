#ifndef _PARTICIPANTS_H_
#define _PARTICIPANTS_H_

#include <iostream>
#include <string>
#include <vector>
#include "Date.hpp"
/*!
@brief A class that stores data about the participants of the competition
@param std::string last_name - Last name of the participant.
@param std::string first_name - First name of the participant.
@param std::string _category - Category of the participant of the competition
@param std::string _country - Which country did the participant come from.
@param Date birth_year - Date of birth of the participant
@param unsigned short id_Participant - Participant ID in the list
*/
class ParticipantsOfTheCompetition : public Date
{
private:
	std::string last_name;
	std::string first_name;
	std::string _category;
	std::string _country;
	Date birth_year;
	unsigned short id_Participant;

public:
	
	///Class default constructor
	ParticipantsOfTheCompetition() = default;
	
	/// <summary>
	/// Class constructor with parameters
	/// </summary>
	/// <param name="std::string">last_name</param>
	/// <param name="std::string">first_name</param>
	/// <param name="std::string">_category</param>
	/// <param name="std::string">_country</param>
	/// <param name="Date">birth_year</param>
	/// <param name="unsigned short">id_Participant</param>
	ParticipantsOfTheCompetition(const std::string&, const std::string&, const std::string&, const std::string&, const Date&, const unsigned short&);
	
	/// <summary>
	/// Copy constructor
	/// </summary>
	/// <param name="ParticipantOfTheCompetiition">Participant</param>
	ParticipantsOfTheCompetition(const ParticipantsOfTheCompetition&);

	/**
	@brief Overloaded assignment operator.
	@brief Allows you to assign the value of each field to another object of the ParticipantsOfTheCompetition class.
	*/
	const ParticipantsOfTheCompetition& operator=(const ParticipantsOfTheCompetition&);

	/**
	@brief Overloading the 'comparison '==' operator
	@brief Allows you to compare objects of the ParticipantsOfTheCompetition class
	*/
	bool operator==(const ParticipantsOfTheCompetition&) const;

	/**
	@brief Overloading the '' operator
	@brief Allows you to compare objects of the ParticipantsOfTheCompetition class from the last_name field
	*/
	bool operator<(const ParticipantsOfTheCompetition&) const;

	/**
	@brief Overloading the '>' operator
	@brief Allows you to compare objects of the ParticipantsOfTheCompetition class from the last_name field
	*/
	bool operator>(const ParticipantsOfTheCompetition&) const;

	/// <summary>
	/// LastName method
	/// </summary>
	/// <returns>std::string last_name</returns>
	std::string LastName() const;

	/// <summary>
	/// FirstName method
	/// </summary>
	/// <returns>std::string first_name</returns>
	std::string FirstName() const;

	/// <summary>
	/// Category method
	/// </summary>
	/// <returns>std::string _category</returns>
	std::string Category() const;

	/// <summary>
	/// Country method
	/// </summary>
	/// <returns>std::string _country</returns>
	std::string Country() const;

	/// <summary>
	/// BirthYear method
	/// </summary>
	/// <returns>Date birth_year</returns>
	Date BirthYear() const;

	/// <summary>
	/// IDParticipant method
	/// </summary>
	/// <returns>unsigned short id_Participant</returns>
	unsigned short IDParticipant() const;
};

/// <summary>
/// Overloading the input stream operator. 
/// Reads values from the list and writes its own value to each field. The separator is the character ','
/// </summary>
/// <param name="std::istream"></param>
/// <param name="ParticipantsOfTheCompetition"></param>
/// <returns>std::istream</returns>
std::istream& operator>>(std::istream&, ParticipantsOfTheCompetition&);

/// <summary>
/// Overloading the output stream operator. 
/// Outputs the values of the class fields in the console
/// </summary>
/// <param name="std::ostream"></param>
/// <param name="ParticipantsOfTheCompetition"></param>
/// <returns>std::ostream</returns>
std::ostream& operator<<(std::ostream&, const ParticipantsOfTheCompetition&);

#endif
