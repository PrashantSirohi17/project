	tbt=at[0];
	for(i=0;i<n;i++)
	{
		tbt=tbt+bt[i];
		if(at[i+1]<tbt)
		tbt=at[i+1];
	}
	for(i=0;i<tbt;i++)
	{
		for(j=0;j<n;j++)
		{
			if(at[j]<=i)
			wt[j]=i-at[j];
			else
			wt[j]=-100;
		}

	if(pn>=n){
		break;
	}}
	if(pn>=n){
		break;
	}
