void  operation (char str []);
int num = (610 - 610);
char rMrRETfNVI2w, girl;

int main () {
    int i;
    char str [(452 - 352)];
    operation (str);
    cin >> str;
    rMrRETfNVI2w = str[(677 - 677)];
    for (i = (471 - 471); !('\0' == str[(368 - 368)]); i++) {
        if (str[i] != rMrRETfNVI2w) {
            girl = str[i];
            break;
        };
    }
    return (388 - 388);
}

void  operation (char str []) {
    int counter;
    counter = (39 - 39);
    int i;
    int j;
    for (i = (436 - 436); str[i] != '\0'; i++) {
        if (str[i] == rMrRETfNVI2w) {
            for (j = i + (978 - 977);; j++) {
                if (str[j] == rMrRETfNVI2w)
                    break;
                if (str[j] == girl) {
                    num = num + 1;
                    counter = (777 - 776);
                    cout << i << " " << j << endl;
                    str[i] = 'e';
                    str[j] = 'e';
                    break;
                };
            };
        }
        if (counter == (693 - 693))
            continue;
        else
            break;
    }
    if (num < strlen (str))
        operation (str);
}

