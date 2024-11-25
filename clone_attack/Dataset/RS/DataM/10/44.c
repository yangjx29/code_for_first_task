int main () {
    int vpfrnR8H2cw, es6aTP, height [(798 - 768)], yfa9PubdJ [(886 - 856)], j, hXOTwiSjZ4CY = -(758 - 757);
    cin >> vpfrnR8H2cw;
    for (es6aTP = (803 - 803); vpfrnR8H2cw > es6aTP; es6aTP = es6aTP + 1)
        cin >> height[es6aTP];
    for (es6aTP = (733 - 733); vpfrnR8H2cw > es6aTP; es6aTP = es6aTP + 1)
        yfa9PubdJ[es6aTP] = (408 - 407);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (es6aTP = (332 - 331); vpfrnR8H2cw > es6aTP; es6aTP++)
        for (j = es6aTP - 1; (266 - 266) <= j; j = j - 1) {
            if (height[es6aTP] <= height[j] && yfa9PubdJ[j] + 1 > yfa9PubdJ[es6aTP])
                yfa9PubdJ[es6aTP] = yfa9PubdJ[j] + 1;
        }
    for (es6aTP = 1; es6aTP < vpfrnR8H2cw; es6aTP++)
        if (yfa9PubdJ[es6aTP] > hXOTwiSjZ4CY)
            hXOTwiSjZ4CY = yfa9PubdJ[es6aTP];
    cout << hXOTwiSjZ4CY << endl;
}

