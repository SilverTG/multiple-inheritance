#include "VoiceRecord.h"

VoiceRecord::VoiceRecord(string speaker, int duration, Date recordingDate)
{
    this->speaker = speaker;
    this->duration = duration;
    this->recordingDate = recordingDate;
}

void VoiceRecord::setSpeaker(string speaker)
{
    this->speaker = speaker;
}

string VoiceRecord::getSpeaker() const
{
    return speaker;
}

void VoiceRecord::setDuration(int duration)
{
    this->duration = duration;
}

int VoiceRecord::getDuration() const
{
    return duration;
}

void VoiceRecord::setRecordingDate(Date recordingDate)
{
    this->recordingDate = recordingDate;
}

Date VoiceRecord::getRecordingDate() const
{
    return recordingDate;
}

void VoiceRecord::showInfo() const
{
    cout << "\nSpeaker: " << speaker
        << "\nDuration: " << duration
        << "\nRecording Date: " << recordingDate << endl;
}
