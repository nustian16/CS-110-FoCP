//Hard Coded Deck.......
int Deck[28] = { 1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 3, 6, 9, 12, 15, 18, 21, 24, 27, 2, 5, 8, 11, 14, 17, 20, 23, 26 };
int keystream() {
	int first_jack_position = 0, second_jack_position = 0, first_half[50], second_half[100];
	int i, j, y, h, k, p, n, mid[100], first_jack_value = 0, second_jack_value = 0, end_card, step4[100], value;
	int stream, l, b, m, value1;
start:
	for (i = 0; i < 28; i++) {    //step1
		if (Deck[i] == 27) {
			if (i != 27) {
				Deck[i] = Deck[i + 1];
				Deck[i + 1] = 27;
				break;
			}
			if (i == 27) {
				Deck[27] = Deck[0];
				Deck[0] = 27;
				break;
			}
		}
	}
	for (i = 0; i < 28; i++) {      //step2
		if (Deck[i] == 28) {
			if (i < 26) {
				Deck[i] = Deck[i + 1];
				Deck[i + 1] = Deck[i + 2];
				Deck[i + 2] = 28;
				break;
			}
			if (i == 26) {
				Deck[26] = Deck[27];
				Deck[27] = Deck[0];
				Deck[0] = 28;
			}
			if(i == 27) {
				Deck[27] = Deck[0];
				Deck[0] = Deck[1];
				Deck[1] = 28;
				break;
			}
		}
	}           //step2 ends

	for (l = 0; l < 28; l++) {       //step3
		if (Deck[l] == 27 || Deck[l] == 28) {
			first_jack_position = l;
			first_jack_value = Deck[l];
			break;
		}
	}
	for (b = (first_jack_position + 1); b < 28; b++) {
		if (Deck[b] == 27 || Deck[b] == 28) {
			second_jack_position = b;
			second_jack_value = Deck[b];
			break;
		}
	}
	for (y = 0; y < first_jack_position; y++) {
		first_half[y] = Deck[y];
	}
	for (h = (second_jack_position + 1); h < 28; h++) {
		second_half[h] = Deck[h];
	}
	for (k = (first_jack_position + 1); k <= (second_jack_position + 1); k++) {
		mid[k] = Deck[k];
	}
	y = 0;
	for (k = (second_jack_position + 1); k < 28; k++) {
		Deck[y] = second_half[k];
			y++;
	}
	Deck[y] = first_jack_value;
	y++;
	for (k = (first_jack_position + 1); k < (second_jack_position); k++) {
		Deck[y] = mid[k];
		y++;
	}
	Deck[y] = second_jack_value;
	y++;
	for (k = 0; k < first_jack_position; k++) {
		Deck[y] = first_half[k];
		y++;
	}              //step3 Triple Cut ends
				   //step 4
	end_card = Deck[27];
	if (end_card == 28) {
		end_card = 27;
		value = 28;
	}
	for (k = 0; k < end_card; k++) {
		step4[k] = Deck[k];
	}
	y = 0;
	for (k = end_card; Deck[k] != end_card; k++) {
		Deck[y] = Deck[y + end_card];
		y++;
	}
	i = 0;
	for (k = (28 - end_card - 1); k < 27; k++) {
		Deck[k] = step4[i];
		i++;
	}
	if (value == 28) {
		end_card = 28;
	}     //step4 Ends.
		  //Step5.
	Deck[27] = end_card;
	value1 = Deck[0];
	stream = Deck[value1];
	if (stream == 27 || stream == 28) {
		goto start;
	}     //step5 ends
	return stream;
}
