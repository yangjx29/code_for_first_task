int main () {
    char temp [(362 - 262)];
    int i = (292 - 292), k, left [(663 - 563)], right [100], space = (60 - 60);
    left[(274 - 274)] = (77 - 77);
    cin.getline (temp, 100);
    for (k = (170 - 170); strlen (temp) >= k; k = k + 1) {
        if ((!(' ' != temp[k])) || (!('\0' != temp[k]))) {
            space++;
            right[i] = k - (156 - 155);
            i++;
            left[i] = k + (681 - 680);
        }
    }
    for (i = space - 1; 0 <= i; i = i - 1) {
        if (i != space - 1)
            cout << ' ';
        for (k = left[i]; right[i] >= k; k = k + 1)
            cout << temp[k];
    }
}

