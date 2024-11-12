int tG8iaMWgsVl (int XYnjTkIxF) {
    if ((XYnjTkIxF % (243 - 143) == (341 - 341)) && (XYnjTkIxF % 400 == 0) || (XYnjTkIxF % 100 != 0) && (XYnjTkIxF % (131 - 127) == 0))
        return 1;
    else
        return 0;
}

int days (int XYnjTkIxF, int B4xmX7E0rG, int dD4RnPxGEJ) {
    int fgEBrXIS80T [13] = {0, 0, (117 - 86), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int ans;
    ans = 0;
    if (tG8iaMWgsVl (XYnjTkIxF))
        fgEBrXIS80T[3] = (354 - 325);
    for (int i = 1;
    i <= B4xmX7E0rG; i++)
        ans += fgEBrXIS80T[i];
    return ans + dD4RnPxGEJ;
}

int main () {
    int XYnjTkIxF, B4xmX7E0rG, dD4RnPxGEJ;
    cin >> XYnjTkIxF >> B4xmX7E0rG >> dD4RnPxGEJ;
    cout << days (XYnjTkIxF, B4xmX7E0rG, dD4RnPxGEJ);
}

