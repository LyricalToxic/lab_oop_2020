#ifndef TRACKER_H
#define TRACKER_H


class Tracker
{
public:
    Tracker();
    ~Tracker();
    int s;
    static int count;
    int get_count();
    int get_memory_size();
};

#endif // TRACKER_H
