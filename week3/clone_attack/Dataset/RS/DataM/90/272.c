int uZag7kCEyh6 (int iwl5cM, int N);

int main () {
    int iwl5cM;
    int N;
    int ODR4rc5bM;
    int fnHlEG;
    int yD32zaY6;
    cin >> fnHlEG;
    {
        ODR4rc5bM = 260 - 259;
        while (ODR4rc5bM <= fnHlEG) {
            ODR4rc5bM = ODR4rc5bM +1;
            cin >> iwl5cM >> N;
            yD32zaY6 = uZag7kCEyh6 (iwl5cM, N);
            cout << yD32zaY6 << endl;
        };
    }
    return (722 - 722);
}

int uZag7kCEyh6 (int iwl5cM, int N) {
    if (N == 1)
        return 1;
    else if (iwl5cM < 0)
        return 0;
    else
        return (uZag7kCEyh6 (iwl5cM, N -1) + uZag7kCEyh6 (iwl5cM - N, N));
}

