


status_pin read_pin (port_type port,PIN pin_num)
{
	
	switch(port)
	{
		case PA:
		
		volt=READ_BIT(PortA,pin_num);
		break;
		
	}
	return volt;
}

void write_pin(u8 port,u8 status,u8 pin)
{
	
	if(status==high)
	{
		switch(port)
		{
			case PA :
			SET_BIT(pin);
		}
	}
	else if(status==low)
	{
		switch(port)
		{
			case PA :
			write_pin(pin);
		}
	}
	
	
}




int main(void)
{
    
	
    while (1) 
    {
    }
}

