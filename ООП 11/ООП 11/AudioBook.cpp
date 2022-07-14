#include "AudioBook.h"

AudioBook::AudioBook(Book br, VoiceRecord vr, int tapes):Book(br),VoiceRecord(vr)
{
	this->tapes = tapes;
}

void AudioBook::setTapes(int tapes)
{
	this->tapes = tapes;
}

int AudioBook::getTapes() const
{
	return tapes;
}

void AudioBook::showInfo() const
{
	Book::showInfo();
	VoiceRecord::showInfo();
	cout << "\nAmount of tapes: " << tapes << endl;
}
