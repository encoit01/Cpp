#pragma once

class objectCounter {
	public:
		const int id;
		static int maxId;
		static int number;

		int getId();
		int getMaxId();
		int getNumber();
		objectCounter();
		~objectCounter();
};
