char xor(char a, char b) {
    return '0' + ((a-'0') ^ (b-'0'));
}

char* get_reminder(char* genp, char* data)
{
    int i;
    while(*data == '0') ++data;
    for(i = 0; genp[i]; ++i)
		if (!data[i]) return data;  
    // printf("LOG: genp=%s, data=%s\n", genp, data); 
    for(i = 0; genp[i]; ++i) {
        // printf("  -  XORing and storing position %d\n", i);
        *(data + i) = xor(genp[i], *(data + i));
    }
    return get_reminder(genp, data + 1);
}
