# Review Journal

The repository goal stays the same: implement a C blockchain tooling project for gas constraint solving, using bounded scenario files and conflict explanations. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 156, lane `ship`
- `stress`: `nonce pressure`, score 225, lane `ship`
- `edge`: `settlement risk`, score 201, lane `ship`
- `recovery`: `proof depth`, score 155, lane `ship`
- `stale`: `event finality`, score 246, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
