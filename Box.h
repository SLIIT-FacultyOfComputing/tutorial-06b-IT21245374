class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void  setheight(float h);
       void  setlength(float l);
       void  setwidth(float w);

       float getheigth();
       float getwidth();
       float getlength();
       int calcVolume();
};
