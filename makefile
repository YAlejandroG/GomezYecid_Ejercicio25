.png : .py .dat
	python .py
	
.dat : .x
	./.x > .dat
	
.x : .cpp
	c++ .cpp -o .x
	
clean : 
	rm .x .dat .png
