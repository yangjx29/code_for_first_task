int main () {
    int nmI9rBa, Q8LhY0d, Oc7kOtd, u7eSkyUpM8s, s4FiS8Py = (742 - 742), IecfsCXPLK = (543 - 543);
    int W4nwKFy5A [100];
    cin >> nmI9rBa;
    for (Q8LhY0d = (278 - 278); nmI9rBa > Q8LhY0d; Q8LhY0d = Q8LhY0d +1)
        cin >> W4nwKFy5A[Q8LhY0d];
    u7eSkyUpM8s = W4nwKFy5A[0];
    for (Q8LhY0d = 0; Q8LhY0d < nmI9rBa; Q8LhY0d++) {
        if (W4nwKFy5A[Q8LhY0d] > s4FiS8Py) {
            s4FiS8Py = W4nwKFy5A[Q8LhY0d];
            Oc7kOtd = Q8LhY0d;
        }
        if (u7eSkyUpM8s > W4nwKFy5A[Q8LhY0d])
            u7eSkyUpM8s = W4nwKFy5A[Q8LhY0d];
    }
    cout << s4FiS8Py << endl;
    W4nwKFy5A[Oc7kOtd] = u7eSkyUpM8s;
    for (Q8LhY0d = 0; Q8LhY0d < nmI9rBa; Q8LhY0d++)
        if (W4nwKFy5A[Q8LhY0d] > IecfsCXPLK)
            IecfsCXPLK = W4nwKFy5A[Q8LhY0d];
    cout << IecfsCXPLK << endl;
    return 0;
}

