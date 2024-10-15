int schedulerType;

int
changeScheduler(int schedulerOption)
{
	if (schedulerOption == 0) {
		schedulerType = defaultScheduler;
	}
	
	else if (schedulerOption == 1) {
		schedulerType = strideScheduler;
	}
	
	else {
		return -1;
	}
	
	return 0;
}
