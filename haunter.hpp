#ifndef RC_HAUNTER_HPP
#define RC_HAUNTER_HPP
#include "CGLabmain.hpp"

namespace haunter{

class HaunterFace{
    public:
        void drawLeftEyes();
		void drawRightEyes();
		void drawFace();
		void drawMouth();
		
};


class Haunter_Hand{
    public:
        void draw();
};

class HauntedHouse{
public :
    HaunterFace haunterFace;
    Haunter_Hand haunterHand;

public:
    void draw(){
        haunterFace.drawLeftEyes();
		haunterFace.drawRightEyes();
        haunterFace.drawFace();
        haunterFace.drawMouth();
        haunterHand.draw();
    }

    void tickTime(){
    //do nothing, reserved for doing animation
    }



    void init(){

    }

};

};

#endif
