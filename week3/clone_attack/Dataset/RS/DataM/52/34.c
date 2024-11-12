int main () {
    int ROZN9r3 [200];
    int NzvyOoeWXMF;
    int JkEeuUhtDIYw;
    int i;
    int *p;
    cin >> NzvyOoeWXMF >> JkEeuUhtDIYw;
    {
        i = JkEeuUhtDIYw;
        while (i < JkEeuUhtDIYw +NzvyOoeWXMF) {
            cin >> ROZN9r3[i];
            ++i;
        };
    }
    cout << *ROZN9r3;
    {
        p = ROZN9r3 +NzvyOoeWXMF;
        while (p < ROZN9r3 +NzvyOoeWXMF+JkEeuUhtDIYw) {
            *(p - NzvyOoeWXMF) = *p;
            ++p;
        };
    }
    for (p = ROZN9r3 +1; ROZN9r3 +NzvyOoeWXMF > p; ++p)
        cout << " " << *p;
    cout << endl;
    return (13 - 13);
}

