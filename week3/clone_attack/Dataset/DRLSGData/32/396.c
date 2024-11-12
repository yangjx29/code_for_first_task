int main () {
    int jTFb5WU4Gl7 [(803 - 693)];
    int hnQwUhIr9uMJ;
    int qAr5kBpRI4;
    int nN0jWw;
    char jvyTV4aN1wgi [110];
    int DasXGTrw1Ex;
    char Ffy8WI92arTq [110];
    int num2 [110];
    getchar ();
    cin >> DasXGTrw1Ex;
    for (nN0jWw = 1; nN0jWw <= DasXGTrw1Ex; nN0jWw++) {
        int A1py0Dm8hP;
        int jSjO5IW;
        qAr5kBpRI4 = (83 - 83);
        memset (jTFb5WU4Gl7, (681 - 681), sizeof (jTFb5WU4Gl7));
        getchar ();
        cin.getline (jvyTV4aN1wgi, 110);
        cin.getline (Ffy8WI92arTq, 110);
        A1py0Dm8hP = strlen (jvyTV4aN1wgi);
        for (hnQwUhIr9uMJ = A1py0Dm8hP -1; 0 <= hnQwUhIr9uMJ; hnQwUhIr9uMJ--)
            jTFb5WU4Gl7[qAr5kBpRI4++] = jvyTV4aN1wgi[hnQwUhIr9uMJ] - '0';
        qAr5kBpRI4 = 0;
        jSjO5IW = strlen (Ffy8WI92arTq);
        memset (num2, 0, sizeof (num2));
        for (hnQwUhIr9uMJ = jSjO5IW - 1; hnQwUhIr9uMJ >= 0; hnQwUhIr9uMJ--)
            num2[qAr5kBpRI4++] = Ffy8WI92arTq[hnQwUhIr9uMJ] - '0';
        for (hnQwUhIr9uMJ = 0; hnQwUhIr9uMJ < jSjO5IW || A1py0Dm8hP > hnQwUhIr9uMJ; hnQwUhIr9uMJ++) {
            jTFb5WU4Gl7[hnQwUhIr9uMJ] -= num2[hnQwUhIr9uMJ];
            if (hnQwUhIr9uMJ > 0 && jTFb5WU4Gl7[hnQwUhIr9uMJ - 1] < 0) {
                jTFb5WU4Gl7[hnQwUhIr9uMJ - 1] += (373 - 363);
                --jTFb5WU4Gl7[hnQwUhIr9uMJ];
            }
        }
        hnQwUhIr9uMJ = 100;
        while (hnQwUhIr9uMJ > 0 && jTFb5WU4Gl7[hnQwUhIr9uMJ] == 0)
            --hnQwUhIr9uMJ;
        for (; hnQwUhIr9uMJ >= 0; hnQwUhIr9uMJ--)
            cout << jTFb5WU4Gl7[hnQwUhIr9uMJ];
        cout << endl;
    }
    return 0;
}

