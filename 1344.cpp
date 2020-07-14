class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ang1=6*minutes;
        if(ang1>=360.0) ang1=ang1-360.0;
        
        double ang2=30*hour;
        ang2+=(minutes*(1.0))/2;
        
       if(ang2>=360.0) ang2=ang2-360.0;
        return min(abs(ang2-ang1),360.0-abs(ang2-ang1));
        
    }
};