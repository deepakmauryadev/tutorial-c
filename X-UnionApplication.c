// Application of union

struct store {
  float price;
  union {
    struct {
      char *name;
      char *author;
      int pages;
    } book;

    struct {
      char *color;
      int size;
      char *design;
    } shirt;

  } item;
};

// example
int main() {
  struct store s;
  s.item.book.name = "The notebook";
}