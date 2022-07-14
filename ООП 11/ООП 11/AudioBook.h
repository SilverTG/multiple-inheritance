#pragma once
#include "Book.h"
#include "VoiceRecord.h"
class AudioBook :
    public Book,
    public VoiceRecord
{
protected:
    int tapes;
public:
    AudioBook(Book br,VoiceRecord vr,int tapes);

    void setTapes(int tapes);
    int getTapes()const;

    void showInfo()const;
};

