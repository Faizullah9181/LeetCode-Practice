class Solution {
public:
    
    void floodFillHelper(vector<vector<int>> &image, int i, int j, int oldColor, int newColor) {
    if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size()) {
        return;
    }

    if (image[i][j] != oldColor) {
        return;
    }

    if (image[i][j] == newColor) {
        return;
    }

    image[i][j] = newColor;

    floodFillHelper(image, i, j + 1, oldColor, newColor);
    floodFillHelper(image, i, j - 1, oldColor, newColor);
    floodFillHelper(image, i + 1, j, oldColor, newColor);
    floodFillHelper(image, i - 1, j, oldColor, newColor);
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         int oldColor = image[sr][sc];
    floodFillHelper(image, sr, sc, oldColor, newColor);
    return image;
    }
};