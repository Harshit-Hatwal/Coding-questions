class Solution {
public:
    double myPow(double x, int n) {
        
        
        if(n<0)
        {  n=abs(n);
           x=1/x;
           
             if(n==0)
                return double(1);
            
        double xpowern2=myPow(x,n/2);
            if(n%2==1)
                return double((xpowern2*xpowern2*x));
            
            return double ((xpowern2*xpowern2));
        }
        else
            
        {   
            
             if(n==0)
                return double(1);
            
        double xpowern2=myPow(x,n/2);
            if(n%2==1)
                return double((xpowern2*xpowern2*x));
            
            return double ((xpowern2*xpowern2));
                
        }
        
        }
        
        
           
    
         
    
};