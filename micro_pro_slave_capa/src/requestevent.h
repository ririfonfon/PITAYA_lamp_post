#ifndef requestevent_h
#define requestevent_h

/*********************** requestEvent ********************/
void requestEvent()
{
    static byte i = 0;
    char TXbuf[] = {e, b};
    Wire.write(TXbuf, sizeof(TXbuf));
}

#endif