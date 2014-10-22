	ofstream file;
	file.open ( filename, ofstream::app );

	file << message;

	file << endl;

	file.close ();
