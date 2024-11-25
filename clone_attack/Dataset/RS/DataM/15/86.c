int main () {
    int VpZFuGjf = (917 - 917);
    int ImfhwesHX, IAZLulV [4000], Ls549V [4000], GRgoSw, n;
    cin >> n;
    {
        int PtDjO8GyE5 = 0;
        while (PtDjO8GyE5 < n * n) {
            cin >> ImfhwesHX;
            if (ImfhwesHX == 0) {
                IAZLulV[VpZFuGjf] = PtDjO8GyE5 / n;
                Ls549V[VpZFuGjf++] = PtDjO8GyE5 % n;
            }
            PtDjO8GyE5 = PtDjO8GyE5 +1;
        };
    }
    cout << (IAZLulV[VpZFuGjf -1] - IAZLulV[0] - 1) * (Ls549V[VpZFuGjf -1] - Ls549V[0] - 1);
    return 0;
}

