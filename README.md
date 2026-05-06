# ion-chain-gas-flow

`ion-chain-gas-flow` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for gas constraint solving, using bounded scenario files and conflict explanations.

## Why This Exists

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Ion Chain Gas Flow Review Notes

For a quick review, compare `event finality` with `proof depth` before reading the middle cases.

## Capabilities

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/ion-chain-gas-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `proof depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C addition stays small enough to inspect in one sitting.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
