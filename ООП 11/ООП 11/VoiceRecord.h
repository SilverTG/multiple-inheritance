#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class VoiceRecord
{
protected:
	string speaker;
	int duration;
	Date recordingDate;
public:

	VoiceRecord(string speaker,int duration,Date recordingDate);

	void setSpeaker(string speaker);
	string getSpeaker()const;

	void setDuration(int duration);
	int getDuration()const;

	void setRecordingDate(Date recordingDate);
	Date getRecordingDate()const;

	void showInfo()const;

};

