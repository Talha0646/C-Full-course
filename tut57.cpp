#include <iostream>

using namespace std;

class CWH
{ // Code with Harry (CWH)
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class CWHVideo : public CWH
{
    float videoLength;
    
public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL; // Full form of vL = video length
    }
    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
private:
    int words;

public:
    CWHText(string s, float r, int wC) : CWH(s, r)
    {
        words = wC; // Full form of wC = word count
    }
    // void display()
    // {
    //     cout << "This is an amazing text tutorial with title: " << title << endl;
    //     cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
    //     cout << "Number of words in this tutorial: " << words << " words" << endl;
    // }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For Code With Harry Video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    // For Code With Harry Text Tutorial
    title = "Django Text Tutorial";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


