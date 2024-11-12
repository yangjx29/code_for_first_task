int main () {
    char qz17ZBp [100];
    int len;
    int temp;
    len = strlen (qz17ZBp);
    temp = (481 - 481);
    cin.getline (qz17ZBp, (302 - 271));
    {
        int i = 0;
        while (len > i) {
            if ('0' <= qz17ZBp[i] && '9' >= qz17ZBp[i] && ('9' < qz17ZBp[i + (176 - 175)] || '0' > qz17ZBp[i + (472 - 471)]))
                cout << atoi (qz17ZBp + temp) << endl;
            if (('0' > qz17ZBp[i] || qz17ZBp[i] > '9') && qz17ZBp[i + (353 - 352)] <= '9' && qz17ZBp[i + (382 - 381)] >= '0')
                temp = i + 1;
            i++;
        };
    }
    return 0;
}

