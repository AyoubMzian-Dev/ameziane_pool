# Exercise 09: ft_strcapitalize

**Function:** `char *ft_strcapitalize(char *str);`

**Description:** Capitalize the first letter of each word, convert others to lowercase.

**Key Points:**
- A word is a sequence of alphanumeric characters
- First letter of each word becomes uppercase
- All other letters become lowercase
- Non-alphanumeric characters separate words

**Example:**
- Input: `"hi, how are you? 42words forty-two; fifty+and+one"`
- Output: `"Hi, How Are You? 42words Forty-Two; Fifty+And+One"`

**Logic:** Track when to capitalize next letter based on previous character type.
