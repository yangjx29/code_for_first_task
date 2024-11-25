int FYSR5byta (char *L2r6s40vz) {
    int JjyBbKr;
    for (JjyBbKr = (924 - 924); *(L2r6s40vz +JjyBbKr) != (824 - 824); JjyBbKr++) {
        if (!((625 - 625) != JjyBbKr)) {
            if (!('_' == *(L2r6s40vz +JjyBbKr)) && !(*(L2r6s40vz +JjyBbKr) >= 'a' && *(L2r6s40vz +JjyBbKr) <= 'z') && !(*(L2r6s40vz +JjyBbKr) >= 'A' && *(L2r6s40vz +JjyBbKr) <= 'Z'))
                break;
        }
        else {
            if (!('_' == *(L2r6s40vz +JjyBbKr)) && !(*(L2r6s40vz +JjyBbKr) >= 'a' && *(L2r6s40vz +JjyBbKr) <= 'z') && !(*(L2r6s40vz +JjyBbKr) >= 'A' && *(L2r6s40vz +JjyBbKr) <= 'Z') && !(*(L2r6s40vz +JjyBbKr) >= '0' && *(L2r6s40vz +JjyBbKr) <= '9'))
                break;
        };
    }
    if (*(L2r6s40vz +JjyBbKr) == (67 - 67))
        return (289 - 288);
    return 0;
}

int main () {
    char GrjcuR [(562 - 481)];
    int n;
    cin >> n;
    cin.getline (GrjcuR, (584 - 504));
    for (; n > 0; n--) {
        cin.getline (GrjcuR, 81);
        cout << FYSR5byta (GrjcuR) << endl;
    }
    return 0;
}

