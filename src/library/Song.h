/*
 * Song.h
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include <boost/filesystem.hpp>
#include <string>
#include <vector>

#ifndef SONG_H_
#define SONG_H_

class Song {
public:
	Song(std::string artist, std::string disc, int number, std::string title, boost::filesystem::path m_path);
	virtual ~Song();

	virtual std::string	getArtist();
	virtual std::string	getDisc();
	virtual int			getNumber();
	virtual std::string	getTitle();
	virtual void		setTitle(std::string title);
private:
	std::string	m_artist;
	std::string	m_disc;
	int			m_number;
	std::string	m_title;

	boost::filesystem::path m_path;
};

#endif /* SONG_H_ */
