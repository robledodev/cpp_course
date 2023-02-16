/*#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Author {
    string id;
    int articleId;
    int scientificArea;
};

struct Reviewer {
    string id;
    int scientificArea;
    vector<int> articleIds;
};

void readAuthors(vector<Author>& authors);
void readReviewers(vector<Reviewer>& reviewers);
bool isReviewerFound(vector<Reviewer>& reviewers, const Author& author);
vector<int> getUnassignedAuthorsPosition(vector<Reviewer>& reviewers, const vector<Author>& authors);
string getReviewerId(const vector<Reviewer>& reviewers, int articleId);

int main() {

    vector<Author> authors;
    vector<Reviewer> reviewers;
    ofstream unassignedAuthorsFile("resources/articulos_sin_revisor.txt");
    ofstream availableReviewersFile("resources/revisores_disponibles.txt");

    readAuthors(authors);
    readReviewers(reviewers);

    vector<int> unassignedAuthorsPosition = getUnassignedAuthorsPosition(reviewers, authors);

    for(int i = 0; i < unassignedAuthorsPosition.size(); i++) {
        int position = unassignedAuthorsPosition[i];
        unassignedAuthorsFile << authors[position].articleId << endl;
    }

    for(int i = 0; i < reviewers.size(); i++) {
        if(reviewers[i].articleIds.size() < 5) {
            availableReviewersFile << reviewers[i].id << endl;
        }
    }

    char option;

    do {

        cout << "A) Mostrar ID del revisor por ID de articulo" << endl;
        cout << "S) Salir" << endl;
        cout << "Introduce por pantalla una opcion: ";
        cin >> option;

        if(option == 'A') {
            int articleId;
            cout << "Introduce el ID del articulo: ";
            cin >> articleId;
            cout << "El articulo lo revisa: " << getReviewerId(reviewers, articleId) << endl;
        } else if(option != 'S') {
            cout << "OPCION ERRONEA" << endl;
        }

    } while(option != 'S' && option != 'A');

    return 0;
}

void readAuthors(vector<Author>& authors) {
    ifstream authorsFile;
    authorsFile.open("resources/autores.txt");

    if(authorsFile.fail()) {
        cout << "No se puede abrir el archivo de autores" << endl;
        exit(EXIT_FAILURE);
    }

    while(!authorsFile.eof()) {
        Author author;
        authorsFile >> author.id >> author.articleId >> author.scientificArea;

        authors.push_back(author);
    }

    authorsFile.close();
}

void readReviewers(vector<Reviewer>& reviewers) {
    ifstream reviewersFile;
    reviewersFile.open("resources/revisores.txt");

    if(reviewersFile.fail()) {
        cout << "No se puede abrir el archivo de revisores" << endl;
        exit(EXIT_FAILURE);
    }

    while(!reviewersFile.eof()) {
        Reviewer reviewer;
        reviewersFile >> reviewer.id >> reviewer.scientificArea;

        reviewers.push_back(reviewer);
    }

    reviewersFile.close();
}

bool isReviewerFound(vector<Reviewer>& reviewers, const Author& author) {
    bool find = false;

    int i = 0;
    while(!find && i < reviewers.size()) {
        if(reviewers[i].scientificArea == author.scientificArea && reviewers[i].articleIds.size() < 5) {
            reviewers[i].articleIds.push_back(author.articleId);
            find = true;
        }
        i++;
    }

    return find;
}

vector<int> getUnassignedAuthorsPosition(vector<Reviewer>& reviewers, const vector<Author>& authors) {
    vector<int> unassignedAuthorsPosition;
    for(int i = 0; i < authors.size(); i++) {
        if(!isReviewerFound(reviewers, authors[i])) {
            unassignedAuthorsPosition.push_back(i);
        }
    }
    return unassignedAuthorsPosition;
}

string getReviewerId(const vector<Reviewer>& reviewers, int articleId) {
    for(int i = 0; i < reviewers.size(); i++) {
        for(int j = 0; j < reviewers[i].articleIds.size(); j++) {
            if(reviewers[i].articleIds[j] == articleId) {
                return reviewers[i].id;
            }
        }
    }
    return "ARTICULO NO ENCONTRADO";
}
*/