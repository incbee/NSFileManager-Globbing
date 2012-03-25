# NSFileManager-Globbing

`NSFileManager-Globbing` adds a category on `NSFileManager` to perform path pattern expansion like that found in shells.

The code is based on [bkyle's gist 293959](https://gist.github.com/1207378), with the difference that bkyle's code is a category on `NSArray` but since globbing is a file operation I thought a category on `NSFileManager` made more sense.

This code also fixes a compiler warning about discarding a qualifier.


## License

This code is provided as-is, with no warranties or anything. You may use it in your projects as you wish, but you must leave this comment block (credits and copyright) intact. That's the only restriction -- Golden % Braeburn otherwise grants you a fully-paid, worldwide, transferrable license to use this code as you see fit, including but not limited to making derivative works.
