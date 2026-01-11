int romanToInt(char* s) {
    int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}

   int len = strlen(s);
    int result = 0;
	int i = 0;
    for (; i < len; i++) {
        int current = getValue(s[i]);
        if (i < len - 1 && current < getValue(s[i+1])) {
            result -= current;
        } else {
            result += current;
        }
    }
    return result;
}