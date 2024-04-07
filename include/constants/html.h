#ifndef GUARD_HTML_H
#define GUARD_HTML_H

// Obtain individual color components of HTML format color
#define HTML_R(c) (((c & 0xFF0000) >> 16))
#define HTML_G(c) (((c & 0x00FF00) >> 8))
#define HTML_B(c) ((c & 0x0000FF))

// Narrow the color component of HTML to 5 bits (high color)
#define HTML15_R(c) ((HTML_R(c) >> 3))
#define HTML15_G(c) ((HTML_G(c) >> 3))
#define HTML15_B(c) ((HTML_B(c) >> 3))

#define HTML(c) ((uint16_t)((HTML15_B(c) << 10) | (HTML15_G(c) << 5) | (HTML15_R(c))))


#endif // GUARD_HTML_H
