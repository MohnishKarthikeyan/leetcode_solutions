public class pow_of_3 {
  public boolean isPowerOfThree(int n) 
    {
        if(n<1)
        {
            return false;
        }
        while(n%3==0)
        {
            n/=3;
        }
        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
