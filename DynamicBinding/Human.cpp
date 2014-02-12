//
//  Human.cpp
//  DynamicBinding
//
//  Created by Michael Raimi on 2/11/14.
//  Copyright (c) 2014 Michael Raimi. All rights reserved.
//
#include <string>
#include "Human.h"

class Human {
public:
    Human(const std::string &n = "No Name",
          const std::string &g = "?"):
                name(n),
                gender(g){}
    std::string getName() const {return name;};
    
    virtual std::string getGender(void){return gender;};
    virtual ~Human(){}
    
    
private:
    std::string name;
protected:
    std::string gender;
};
