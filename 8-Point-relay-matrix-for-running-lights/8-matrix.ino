void setup()
{
  for (int i = 1; i <= 16; i++)
  {
    pinMode(i, OUTPUT);
  }
  
  for(int i = 10; i<= 16; i++)
  {
  	digitalWrite(i,HIGH);
  }
}

void loop()
{
  	for(int x = 1; x<=20; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	  }
	}
	
	for(int x = 1; x<=20; x++)
	{
	  for(int i = 8; i>=1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	  }
	}
	
	for(int x = 1; x<=10; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	  }
	
	  for(int i =7; i>= 2; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	  }
	}
	
	for(int x = 1; x<=10; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}
	
	for(int x = 1; x<=10; x++)
	{
	  for(int i = 8; i>=1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 8; i>=1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}
	
	for(int x = 1; x<=5; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	  
	  for(int i = 8; i>=1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 8; i>=1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}
	
	for(int x = 1; x<=10; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	
	  for(int i = 8; i>= 1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}

	for(int x = 1; x<=10; x++)
	{
	  for(int i = 8; i>= 1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}
	
	for(int x = 1; x<=5; x++)
	{
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	
	  for(int i = 8; i>= 1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	  
	  for(int i = 8; i>= 1; i--)
	  {
	    int j= 8+i;
	    digitalWrite(i,HIGH);digitalWrite(j,LOW);
	    delay(100);
	  }
	  
	  for(int i = 1; i<=8; i++)
	  {
	    int j= 8+i;
	    digitalWrite(i,LOW);digitalWrite(j,HIGH);
	    delay(100);
	  }
	}
} 
