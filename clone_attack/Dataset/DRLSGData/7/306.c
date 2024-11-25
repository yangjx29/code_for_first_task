int main () {
    int Oht74AVjo;
    char *mo3gMIS, *q;
    char FLl7ntcA [(1035 - 735)], ZbfzlKZEe [(425 - 125)], c [300];
    cin >> FLl7ntcA;
    cin >> ZbfzlKZEe;
    Oht74AVjo = strlen (ZbfzlKZEe);
    mo3gMIS = strstr (FLl7ntcA, ZbfzlKZEe);
    cin >> c;
    q = FLl7ntcA;
    if (!(NULL != mo3gMIS)) {
        cout << FLl7ntcA;
    }
    else {
        while (q < mo3gMIS) {
            cout << *q;
            q++;
        }
        q = mo3gMIS + Oht74AVjo;
        cout << c;
        for (; *q != '\0';) {
            cout << *q;
            q++;
        }
    }
    return (741 - 741);
}

