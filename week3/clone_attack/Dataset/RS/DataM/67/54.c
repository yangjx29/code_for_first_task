int main () {
    int V7nb4BD0;
    int E0jCcS2yP;
    int IzvQOe2frKg;
    float gXmHQiAsaUCn;
    float RtB48mLQkZ;
    float eWhVJqQTcB;
    cin >> V7nb4BD0;
    cin >> gXmHQiAsaUCn >> RtB48mLQkZ;
    eWhVJqQTcB = RtB48mLQkZ / gXmHQiAsaUCn;
    for (; 1 < V7nb4BD0; V7nb4BD0--) {
        cin >> gXmHQiAsaUCn >> RtB48mLQkZ;
        cout << (RtB48mLQkZ / gXmHQiAsaUCn - eWhVJqQTcB > (289.05 - 289.0) ? "better" : (eWhVJqQTcB - RtB48mLQkZ / gXmHQiAsaUCn > 0.05 ? "worse" : "same")) << endl;
    }
    return EXIT_SUCCESS;
}

