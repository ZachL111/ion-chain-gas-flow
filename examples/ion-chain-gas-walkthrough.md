# Ion Chain Gas Flow Walkthrough

I use this file as a small checklist before changing the C implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 156 | ship |
| stress | nonce pressure | 225 | ship |
| edge | settlement risk | 201 | ship |
| recovery | proof depth | 155 | ship |
| stale | event finality | 246 | ship |

Start with `stale` and `recovery`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The next useful expansion would be a malformed fixture around nonce pressure and proof depth.
